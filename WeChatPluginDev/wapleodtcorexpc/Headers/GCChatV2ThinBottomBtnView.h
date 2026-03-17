//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class GCChatV2BottomBtnModel;

@interface GCChatV2ThinBottomBtnView : UIView
{
    GCChatV2BottomBtnModel *_btnModel;
}

@property(retain, nonatomic) GCChatV2BottomBtnModel *btnModel; // @synthesize btnModel=_btnModel;
- (void)reportExplosure;
- (void)configureWithModel:(id)arg1;

@end

