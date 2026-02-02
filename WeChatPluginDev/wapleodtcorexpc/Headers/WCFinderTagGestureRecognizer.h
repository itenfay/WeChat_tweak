//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITapGestureRecognizer.h>

@interface WCFinderTagGestureRecognizer : UITapGestureRecognizer
{
    unsigned long long _hashValue;
    CDUnknownBlockType _action;
}

+ (id)gestureWithAction:(CDUnknownBlockType)arg1 hash:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
- (void)onTap:(id)arg1;
- (void)replaceBlock:(CDUnknownBlockType)arg1;

@end

