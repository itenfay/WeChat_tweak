//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol VoIPMPUITouchAlgorithmDelegate <NSObject>

@optional
- (void)VoIPMPUITouchAlgorithmOnEndWithOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)VoIPMPUITouchAlgorithmOnMoveWithOrigin:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)VoIPMPUITouchAlgorithmOnBegin;
- (struct CGPoint)VoIPMPUITouchAlgorithmTransformPointWithPoint:(struct CGPoint)arg1;
- (_Bool)VoIPMPUITouchAlgorithmIsFoldEnabled;
- (UIView *)VoIPMPUITouchAlgorithmView;
- (void)VoIPMPUITouchAlgorithmOnTaped:(struct CGPoint)arg1;
@end

