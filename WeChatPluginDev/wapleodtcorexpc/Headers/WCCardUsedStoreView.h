//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCardUsedStoreInfo;
@protocol WCCardUsedStoreViewDelegate;

@interface WCCardUsedStoreView
{
    WCCardUsedStoreInfo *_usedStoreInfo;
    id <WCCardUsedStoreViewDelegate> _delegate;
}

+ (double)calHeight:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardUsedStoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onNavgation;
- (void)onMakeACall;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithUsedStoreInfo:(id)arg1;

@end

