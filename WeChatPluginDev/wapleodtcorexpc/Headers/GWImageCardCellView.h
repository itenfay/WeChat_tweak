//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GWImageCardCellView
{
    _Bool _hidePlayBtn;
    _Bool _hideDesc;
    NSString *_coverImgUrl;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideDesc; // @synthesize hideDesc=_hideDesc;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool hidePlayBtn; // @synthesize hidePlayBtn=_hidePlayBtn;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
- (void)configureWithCellModel:(id)arg1;

@end

