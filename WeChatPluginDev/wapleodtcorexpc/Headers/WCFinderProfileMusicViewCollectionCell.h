//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCFinderProfileMusicView;

@interface WCFinderProfileMusicViewCollectionCell
{
    _Bool _showSeperator;
    _Bool _allowSlideDelete;
    WCFinderProfileMusicView *_musicView;
    UIView *_seperator;
}

+ (double)displayHeightWithIndexPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperator; // @synthesize seperator=_seperator;
@property(nonatomic) _Bool allowSlideDelete; // @synthesize allowSlideDelete=_allowSlideDelete;
@property(nonatomic) _Bool showSeperator; // @synthesize showSeperator=_showSeperator;
@property(retain, nonatomic) WCFinderProfileMusicView *musicView; // @synthesize musicView=_musicView;
- (void)onSlideMenuExpose:(id)arg1;
- (void)onSlideDelete;
- (id)curThumbImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)displayContentView;

@end

