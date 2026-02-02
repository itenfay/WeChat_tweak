//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString;

@interface WCLiveGameRankHalfScreenView
{
    CDUnknownBlockType _jumpCallback;
    MMWebImageView *_webImageView;
    MMUILabel *_footerLabel;
    NSString *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) MMUILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(copy, nonatomic) CDUnknownBlockType jumpCallback; // @synthesize jumpCallback=_jumpCallback;
- (void)onJumpButtonClicked;
- (void)layoutUI;
- (id)initWithDesc:(id)arg1 imageUrl:(id)arg2;

@end

