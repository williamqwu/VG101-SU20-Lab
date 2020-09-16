% Created by Scarlet
folder = dir('src');
total = length(folder);
csvName = "score.xlsx";
%csvWrite(csvName,["Submission Name" "ex1 grade" "ex1 detail"...
%	 "ex2 grade" "ex2 detail" "ex3 grade" "ex3 detail"...
%	  "ex4 grade" "ex4 detail" "ex5 grade" "ex5 detail"...
%	   "ex6 grade" "ex6 detail"],0,0);
E = [];

for i = 3:total
    thispath = "src/" + folder(i).name;
    disp(thispath);
    addpath(thispath);
    C = [ex1grader(); ex2grader(); ex3grader(); ex4grader(); ex5grader(); ex6grader()];
    %ex4grader();
    D = cell(1, 14);
    D{1} = folder(i).name;
    totscore = 0;

    for i = 1:6
        totscore = totscore + C(i).g;
    end

    D{2} = totscore;

    for i = 1:6
        D{2 * i + 1} = C(i).g;
        D{2 * i + 2} = C(i).d;
    end

    E = [E; D];
    rmpath(thispath);
end

T = cell2table(E, 'VariableNames', {'SubmissionName' 'TotalScore''ex1grade' ...
                    'ex1detail''ex2grade''ex2detail''ex3grade''ex3detail' ...
                    'ex4grade''ex4detail''ex5grade''ex5detail' ...
                    'ex6grade''ex6detail'});
writetable(T, csvName, 'Sheet', 1, 'Range', 'A1');

function res = ex1grader()
    disp("islargest");
    grade = 0;
    detail = "";
    D1 = [1, 2, 3; 4, 5, 6; 7, 8, 9];
    D2 = [1; 1; 1];
    D3 = [3, 12, 34; 34, 5, 23; 21, 22, 10];
    D4 = [31, -31, 0, 0; 0, 12, -3, -4];
    D5 = [-23, 189, 53, 67, 34, 89; 83, 23, 59, 23, 11, 90];
    D6 = [194, 302, 31, 43, 577, 127; 89, 60, 5, 49, 78, 12];
    cases = {...
            cat(3, D1, 2 * D1, 3 * D1), 27; ...
            cat(3, D2, D2, D2), 1; ...
            cat(3, D3, D1, 2 * D1), 34; ...
            cat(3, D4, D4, D4), 31; ...
            cat(3, D5, D6, D5 - D6), 577; ...
            };
    n = 5;

    for i = 1:n

        try

            if islargest(cases{i, 1}) == cases{i, 2}
                grade = grade + 15 / n;
                detail = detail + "A";
            else
                detail = detail + "W";
            end

        catch
            detail = detail + "W";
        end

    end

    res.g = grade;
    res.d = detail;
end

function res = ex2grader()
    disp("pfactors");
    grade = 0;
    detail = "";
    cases = {...
            10, [2 5]; ...
            15432, [2 3 4 6 8 12 24 643 1286 1929 2572 3858 5144 7716]; ...
            3, []; ...
            17, []; ...
            125, [5 25]; ...
            412, [2 4 103 206]; ...
            2928, [2 3 4 6 8 12 16 24 48 61 122 183 244 366 488 732 976 1464]; ...
            40348, [2 4 7 11 14 22 28 44 77 131 154 262 308 524 917 1441 1834 2882 3668 5764 10087 20174]; ...
            221202, [2 3 6 9 18 12289 24578 36867 73734 110601]; ...
            9421684, [2 4 101 202 404 23321 46642 93284 2355421 4710842]; ...
            };
    n = length(cases);

    for i = 1:n

        try

            if sum(pfactors(cases{i, 1}) == cases{i, 2}) == length(cases{i, 2})
                grade = grade + 15 / n;
                detail = detail + "A";
            else
                detail = detail + "W";
            end

        catch
            detail = detail + "W";
        end

    end

    res.g = grade;
    res.d = detail;
end

function res = ex3grader()
    disp("evenFibo");
    grade = 0;
    detail = "";
    cases = [...
            14, 4; ...
            150, 50; ...
            1000, 333; ...
            6e6, 2e6; ...
            495, 165; ...
            19260817, 6420272; ...
            0, 0; ...
            1, 0; ...
            2, 0; ...
            233, 77];
    n = length(cases);

    for i = 1:n

        try

            if evenFibo(cases(i, 1)) == cases(i, 2)
                grade = grade + 15 / n;
                detail = detail + "A";
            else
                detail = detail + "W";
            end

        catch
            detail = detail + "W";
        end

    end

    res.g = grade;
    res.d = detail;
end

function res = ex4grader()
    disp("ex4");
    grade = 0;
    detail = "";

    try
        fid = fopen('text.txt', 'wt');
        fprintf(fid, "ewq 321");
        fclose(fid);
        ex4('text.txt');
        fid2 = fopen('reverse.txt', 'rt');
        flag = 0;
        i = 0;
        line = fgetl(fid2);
        fclose(fid2);

        if (line == '123 qwe')
            flag = 1;
        end

        if flag == 1
            grade = grade + 7.5;
            detail = detail + "A";
        else
            detail = detail + "W";
        end

        fid = fopen('text.txt', 'wt');
        fprintf(fid, "ewq 321\nffddsaq\n89 753gfe 874r");
        fclose(fid);
        ex4('text.txt');
        fid2 = fopen('reverse.txt', 'rt');
        flag = 0;
        line1 = {'123 qwe'; 'qasddff'; 'r478 efg357 98'};
        i = 0;

        while feof(fid2) ~= 1
            line = fgetl(fid2);
            i = i + 1;

            if (line ~= line1{i, 1})
                flag = 1;
            end

        end

        fclose(fid2);

        if flag == 0
            grade = grade + 7.5;
            detail = detail + "A";
        else
            detail = detail + "W";
        end

    catch
        detail = detail + "W";
    end

    res.g = grade;
    res.d = detail;
end

function res = ex5grader()
    disp("ex5");
    grade = 0;
    detail = "";
    cases = {...
            [1, 3, 3, 4, 10, 10], 11, [1 0 2 1 0 0 0 0 0 2 0]; ...
            [11], 15, [0 0 0 0 0 0 0 0 0 0 1 0 0 0 0]; ...
            [5 8 1 2 4 4 6 3 1 2 5 4 9 7 3 5 6], 9, [2 2 2 3 3 2 1 1 1]; ...
            [1 2 1 1 2 1 2 2 1 2 2 2 2 1 1 1 2 1 2 1 2 1 2], 2, [11 12]; ...
            [3 6 9 1 3 6 9 1 3 9 3 1 1 3 1 2 1 2 1 2], 10, [7 3 5 0 0 2 0 0 3 0]; ...
            [23 1 5 4 3 1 12 21 20 2 4 6 7], 25, [2 1 1 2 1 1 1 0 0 0 0 1 0 0 0 0 0 0 0 1 1 0 1 0 0]; ...
            };
    n = length(cases);

    for i = 1:n

        try

            if sum(ex5(cases{i, 1}, cases{i, 2}) == cases{i, 3}) == length(cases{i, 3})
                grade = grade + 15 / n;
                detail = detail + "A";
            else
                detail = detail + "W";
            end

        catch
            detail = detail + "W";
        end

    end

    res.g = grade;
    res.d = detail;
end

function res = ex6grader()
    disp("ex6");
    grade = 0;
    detail = "";
    cases = {...
            [0 0; 10 6; 10 0; 10 0; 0 6; 1 7], 11; ...
            [0 0; 2 0], 3; ...
            [0 0; 1 1], 2; ...
            [12 83; 79 20; 19 88; 87 99; 47 8], 8; ...
            [82 80; 95 54; 35 70; 78 12; 27 49; 49 26; 36 92; 79 56; 26 7; 31 1; 63 45; 96 88; 33 22; 25 60; 18 36; 42 77; 92 76; 51 55; 90 49; 25 34; 32 66; 46 47; 27 68; 33 0; 81 38], 54; ...
            [83 46; 3 86; 98 18; 79 14; 41 2; 18 88; 87 86; 80 8; 0 88; 82 64; 40 88; 21 69; 74 20; 95 45; 76 81; 80 45; 61 8; 83 73; 87 60; 66 72; 94 92; 11 6; 13 91; 50 14; 12 83; 12 46; 81 21; 2 70; 55 55; 83 58; 83 62; 22 8; 22 2; 96 19; 99 11; 96 13; 62 18; 61 38; 55 94; 17 57; 44 16; 51 27; 97 42; 92 60; 53 47], 252; ...
            [47 38; 22 48; 40 14; 2 16; 71 23; 87 97; 99 19; 2 62; 44 88; 98 33; 31 50; 73 52; 16 41; 46 54; 33 6; 0 3; 79 90; 8 64; 30 85; 28 86; 53 67; 90 31; 91 1; 86 5; 95 76; 77 91; 60 35; 90 13; 30 84; 62 98; 26 57; 19 19; 70 70; 76 26; 99 92; 3 28; 23 1; 94 65; 79 73; 69 21; 49 66; 3 98; 18 62; 42 42; 5 3; 77 58; 16 37; 42 46; 67 8; 94 59; 68 34; 87 53; 42 81; 80 94; 65 57; 66 79; 57 3; 75 44; 38 63; 45 71; 72 62; 84 53; 8 91; 33 52; 43 68], 241; ...
            [34 50; 41 64; 30 85; 85 16; 58 76; 71 55; 87 85; 6 63; 57 56; 80 14; 50 21; 25 24; 80 1; 59 55; 72 83; 3 41; 51 41; 63 75; 68 4; 89 94; 9 1; 57 32; 30 69; 28 16; 17 75; 93 82; 16 31; 10 50; 43 36; 77 4; 10 67; 41 82; 3 29; 45 35; 56 51; 55 70; 78 28; 17 33; 18 66; 94 65; 11 41; 68 21; 46 86; 86 76; 75 68; 78 50; 51 38; 36 86; 17 88; 44 41; 80 45; 60 12; 21 84; 77 77; 47 11; 36 25; 27 12; 27 34; 92 77; 6 0; 97 42; 38 99; 65 83; 72 11; 90 84; 37 17; 11 78; 55 39; 26 71; 73 78; 37 16; 11 57; 75 48; 70 28; 37 2; 28 70; 21 56; 75 2; 44 7; 41 81; 19 82; 47 99; 12 54; 43 36; 77 82], 277; ...
            [39 90; 68 67; 83 99; 17 30; 65 67; 17 56; 58 53; 61 19; 97 65; 26 2; 54 30; 47 54; 66 26; 22 28; 41 0; 78 32; 43 3; 2 52; 32 71; 44 60; 72 53; 94 20; 69 30; 68 89; 55 13; 67 4; 20 1; 9 11; 23 0; 75 81; 83 14; 38 64; 44 89; 60 16; 86 25; 68 72; 90 81; 61 7; 23 69; 28 32; 59 75; 12 31; 72 83; 86 43; 27 40; 62 62; 20 88; 67 61; 79 84; 4 43; 9 41], 113; ...
            [28 38; 67 73; 16 86; 43 25; 45 59; 86 78; 55 89; 29 86; 99 73; 32 49; 41 83; 78 53; 55 15; 87 10; 20 75; 30 53; 83 11; 23 46; 85 57; 70 81; 20 7; 19 31; 47 69; 45 28; 58 77; 15 31; 97 60; 75 83; 80 34; 2 58; 53 76; 35 70; 94 29; 65 53; 98 89; 66 81; 85 82; 88 64; 40 21; 50 69; 17 27; 83 47; 2 16; 7 2; 63 33; 40 5; 15 20; 60 32; 26 74; 83 43; 70 98; 30 15; 99 25; 16 91; 95 29; 19 39; 52 95; 52 78; 53 72; 96 63; 41 58; 62 63; 54 25; 10 30; 77 79; 40 0; 43 83; 85 16; 34 37; 77 84; 57 35; 70 86; 27 21; 36 6; 66 87; 27 17; 57 9; 56 13; 77 68; 51 94; 5 94; 58 54; 51 3; 85 88; 37 0; 21 40; 99 81; 4 43; 4 89; 90 65; 7 89; 49 51; 69 66; 73 47; 57 96; 33 64; 2 55; 17 89; 5 72; 60 14], 343; ...
            };
    n = length(cases);

    for i = 1:n

        try

            if ex6(cases{i, 1}) == cases{i, 2}
                grade = grade + 15 / n;
                detail = detail + "A";
            else
                detail = detail + "W";
            end

        catch
            detail = detail + "W";
        end

    end

    res.g = grade;
    res.d = detail;
end
