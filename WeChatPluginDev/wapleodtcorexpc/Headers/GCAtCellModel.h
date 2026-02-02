//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GCAtCellModel
{
    _Bool _selected;
    _Bool _showSeperatedLineInLeft;
    NSString *_headUrl;
    NSString *_nickName;
    NSString *_subTitle;
    NSString *_userId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSeperatedLineInLeft; // @synthesize showSeperatedLineInLeft=_showSeperatedLineInLeft;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
- (double)cellHeight;
- (Class)bindCellClass;

@end

