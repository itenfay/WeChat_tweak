//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage, WCDataItem;

@interface TLProfileVideoMediaViewProvider : NSObject
{
    unsigned int type;
    WCDataItem *_dataItem;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) unsigned int type; // @synthesize type;
- (_Bool)isInvalid;
- (id)reportSourceFeedId;
- (id)mediaDescription;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)generateConfig;
- (id)mediaItem;
- (id)mediaContentView;
- (id)defaultImage;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1;
@property(readonly, nonatomic) _Bool useCoverForContent;
- (id)customView;
@property(readonly, nonatomic) _Bool preferCustomView;
- (id)headImageView;
@property(readonly, nonatomic) NSString *expandableHeaderAccessibilityLabel;
- (id)title;
- (id)initWithDataItem:(id)arg1 image:(id)arg2;
- (_Bool)supportCustomMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidesBlurForShortHeightMedias;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;

@end

