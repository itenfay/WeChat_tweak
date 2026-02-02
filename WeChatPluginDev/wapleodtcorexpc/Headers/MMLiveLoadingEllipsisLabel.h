//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class MMTimer, NSString;

@interface MMLiveLoadingEllipsisLabel : UILabel
{
    NSString *_internalText;
    MMTimer *_ellipsisRotationTimer;
    unsigned long long _ellipsisDotCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long ellipsisDotCount; // @synthesize ellipsisDotCount=_ellipsisDotCount;
@property(retain, nonatomic) MMTimer *ellipsisRotationTimer; // @synthesize ellipsisRotationTimer=_ellipsisRotationTimer;
@property(retain, nonatomic) NSString *internalText; // @synthesize internalText=_internalText;
- (void)ellipsisRotationTimerTick;
- (void)resetEllipisRotationTimer;
- (void)didMoveToSuperview;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

