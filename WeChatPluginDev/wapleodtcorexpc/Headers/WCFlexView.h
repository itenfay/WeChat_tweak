//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSValue;

@interface WCFlexView : UIView
{
    _Bool _updateLock;
    NSValue *_preSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool updateLock; // @synthesize updateLock=_updateLock;
@property(retain, nonatomic) NSValue *preSize; // @synthesize preSize=_preSize;
- (struct CGSize)intrinsicContentSize;

@end

