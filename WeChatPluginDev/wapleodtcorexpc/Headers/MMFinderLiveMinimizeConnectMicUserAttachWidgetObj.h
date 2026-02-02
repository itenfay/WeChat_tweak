//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImageView, UIView;

@interface MMFinderLiveMinimizeConnectMicUserAttachWidgetObj : NSObject
{
    _Bool _forceCenteredLayoutMode;
    NSString *_uniqueId;
    NSString *_businessName;
    UIImageView *_contentImageView;
    UIView *_containerView;
    UIView *_rootView;
    struct CGPoint _normalizedCenter;
    struct CGSize _normalizedSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGSize normalizedSize; // @synthesize normalizedSize=_normalizedSize;
@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) _Bool forceCenteredLayoutMode; // @synthesize forceCenteredLayoutMode=_forceCenteredLayoutMode;
@property(retain, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly, nonatomic) UIView *contentView;
- (id)getSnapshotUserInfoImage;
- (void)createContentImageView;
- (id)getHeaderImageView;
- (void)layoutUI;
- (void)deAttachFromContainerView;
- (void)attachToContainerView:(id)arg1;
- (void)refresh;
- (id)initWithRootView:(id)arg1;

@end

