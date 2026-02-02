//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;
@protocol WCFinderStreamProfileBlankModelDelegate;

@interface WCFinderStreamProfileBlankModel : NSObject
{
    long long _blankType;
    NSString *_displayTips;
    CDUnknownBlockType _tipsClickBlock;
    id <WCFinderStreamProfileBlankModelDelegate> _delegate;
}

@property(nonatomic) __weak id <WCFinderStreamProfileBlankModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType tipsClickBlock; // @synthesize tipsClickBlock=_tipsClickBlock;
@property(retain, nonatomic) NSString *displayTips; // @synthesize displayTips=_displayTips;
@property(nonatomic) long long blankType; // @synthesize blankType=_blankType;
- (void)showStoppedType;
- (void)showLodingType;
- (void)showTipsType:(id)arg1 retryBlock:(CDUnknownBlockType)arg2;
- (void)showNoMoreType;
- (void)_reset:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)viewPageClassName;
- (id)displayName;

@end
