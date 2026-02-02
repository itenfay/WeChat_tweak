//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIButton, NSArray;

@interface MMFinderLiveBottomButtonAction : NSObject
{
    id _target;
    MMUIButton *_button;
    NSArray *_selectorNames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *selectorNames; // @synthesize selectorNames=_selectorNames;
@property(nonatomic) __weak MMUIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id target; // @synthesize target=_target;

@end

