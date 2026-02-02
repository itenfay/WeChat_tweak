//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class MMTextStateMediaItem, NSString;

@interface TextStateMediaBackgroundView : UIImageView
{
    MMTextStateMediaItem *_mediaItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTextStateMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void)onTextStateMediaThumbDownloadFail:(id)arg1;
- (void)onTextStateMediaThumbDownloadSuccess:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

