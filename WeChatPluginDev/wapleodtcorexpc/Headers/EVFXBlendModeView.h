//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface EVFXBlendModeView : UIView
{
    UILabel *m_BlendModeLabel;
    int m_BlendModeIndex;
    NSArray *m_BlendModeTexts;
    NSString *_currentBlendModeText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSString *currentBlendModeText; // @synthesize currentBlendModeText=_currentBlendModeText;
- (id)switchBlendMode;
- (void)initBlendModeLabel;
- (void)initBlendModeText;
- (id)init;

@end

