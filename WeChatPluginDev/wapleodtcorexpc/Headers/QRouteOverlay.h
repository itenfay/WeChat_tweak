//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, QTextStyle;

@interface QRouteOverlay
{
    NSMutableArray *_arrStyle;
    NSMutableArray *_arrColor;
    NSMutableArray *_arrText;
    QTextStyle *_textStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTextStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) NSMutableArray *arrText; // @synthesize arrText=_arrText;
@property(retain, nonatomic) NSMutableArray *arrColor; // @synthesize arrColor=_arrColor;
@property(retain, nonatomic) NSMutableArray *arrStyle; // @synthesize arrStyle=_arrStyle;

@end

