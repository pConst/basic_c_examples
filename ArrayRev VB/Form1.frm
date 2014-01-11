VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3195
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4680
   LinkTopic       =   "Form1"
   ScaleHeight     =   3195
   ScaleWidth      =   4680
   StartUpPosition =   3  'Windows Default
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

Private Declare Sub CopyMemory Lib "kernel32" Alias "RtlMoveMemory" _
    (ByVal pDst As Long, _
    ByVal pSrc As Long, _
    ByVal ByteLen As Long)

Dim Arr(0 To 1, 0 To 2) As Byte

Private Sub Form_Load()
Dim i As Byte
Dim buff As Byte

    Arr(0, 0) = 1: Arr(1, 0) = 2
    Arr(0, 1) = 3: Arr(1, 1) = 4
    Arr(0, 2) = 5: Arr(1, 2) = 6
    
    For i = 0 To 5
        Call CopyMemory(VarPtr(buff), VarPtr(Arr(0, 0)) + i, 1)
        Debug.Print buff;
    Next i
    
End Sub
