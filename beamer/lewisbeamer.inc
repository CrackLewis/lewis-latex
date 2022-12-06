\usepackage{xeCJK}
\usepackage[utf8]{inputenc}
\usepackage{amsmath}
\usepackage{amsfonts}
\usepackage{graphicx}
\usepackage{listings}
\usepackage{float}
\usepackage{booktabs}

\definecolor{mygreen}{rgb}{0,0.6,0}
\definecolor{mygray}{rgb}{0.5,0.5,0.5}
\definecolor{mymauve}{rgb}{0.58,0,0.82}
\lstset{
 backgroundcolor=\color{black!20!white}, 
 basicstyle = \scriptsize\ttfamily\color{black!70!white},       
 breakatwhitespace = false,        
 breaklines = true,                 
 captionpos = b,                    
 commentstyle = \itshape\color{black!50!white}\bfseries,
 extendedchars = false,             
 frame =shadowbox, 
 framerule=0.5pt,
 keepspaces=true,
 keywordstyle=\color{blue!50!green}\bfseries, % keyword style
 language = C++,                     % the language of code
 otherkeywords={string,vector,pair}, 
 numbers=left, 
 numbersep=5pt,
 numberstyle=\tiny\color{white},
 rulecolor=\color{black},         
 showspaces=false,  
 showstringspaces=false, 
 showtabs=false,    
 stepnumber=1,         
 stringstyle=\bfseries\color{green!90!black},        % string literal style
 tabsize=2,          
 title=\lstname,
 columns=flexible              
}

\usetheme{CambridgeUS}

\useinnertheme{rectangles}

%============================================================
%
% 颜色配置
%
%============================================================
\definecolor{drylo}{RGB}{255, 198, 0}
\definecolor{drybl}{RGB}{0,47,108}
\definecolor{green}{RGB}{0,255,0}
 
\definecolor{drblack}{RGB}{0,0,0} 

\definecolor{black}{RGB}{0, 0, 0}
\definecolor{white}{RGB}{255, 255, 255}

\setbeamertemplate{blocks}[rounded][shadow=false]
\setbeamertemplate{title page}[default][colsep=-4bp,rounded=true]


\setbeamercolor{title}{fg=black,bg=drylo}
\setbeamercolor{subtitle}{fg=white,bg=black!90}

\setbeamercolor{title in head/foot}{fg=black,bg=drylo}
\setbeamercolor{frametitle}{fg=black,bg=drylo}
\setbeamercolor{background canvas}{fg=green,bg=black}
%\setbeamercolor{background canvas}{fg=black,bg=white!98}
%\setbeamercolor{foreground canvas}{fg=green,bg=yellow}

\setbeamercolor{section in head/foot}{bg=black!94}
\setbeamercolor{section in head/foot}{fg=white!80}
\setbeamercolor{subsection in head/foot}{bg=black!90}

\setbeamercolor{author in head/foot}{bg=drybl}
\setbeamercolor{author in head/foot}{fg=white}
\setbeamercolor{date in head/foot}{fg=white,bg=black!85}

\setbeamercolor{local structure}{fg=drylo,bg=drybl}

\setbeamercolor{item}{fg=white,bg=green} % that bullet marker for item
\setbeamercolor{normal text}{fg=white}


\setbeamercolor{block title}{fg=white,bg=black!80}
\setbeamercolor{block body}{fg=white,bg=black!70}
\setbeamercolor{block shadow}{fg=black,bg=black}

\pgfdeclareverticalshading{beamer@belowframetitle}{\the\paperwidth}{%
      color(0ex)=(green);%PUT THE COLOUR YOU WANT, INSTEAD OF black
      color(0.5ex)=(green)
    }
%\beamer@themerounded@shadow]

\newcommand{\mytitlepage}{\section{标题页}\begin{frame}\maketitle\end{frame}}

% 同济纹章
\titlegraphic{
    %\hfill
    \includegraphics[height=1.5cm]{./fig/tongjilogo.pdf}
}
