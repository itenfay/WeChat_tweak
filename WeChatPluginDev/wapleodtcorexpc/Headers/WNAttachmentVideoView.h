//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavSightView, NSString;

@interface WNAttachmentVideoView
{
    FavSightView *_videoPlayer;
}

+ (double)getHeightOfAttachment:(id)arg1 withWidth:(double)arg2;
- (void).cxx_destruct;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(_Bool)arg2;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onClickObject;
- (void)tryConfigCompressVideoPath;
- (void)layoutView;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

