//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSnsABTestTipActionResult : NSObject
{
    int tipViewType;
    unsigned long long buttonCount;
    unsigned long long buttonClickedIndex;
    int buttonActionType;
}

@property(nonatomic) int buttonActionType; // @synthesize buttonActionType;
@property(nonatomic) unsigned long long buttonClickedIndex; // @synthesize buttonClickedIndex;
@property(nonatomic) unsigned long long buttonCount; // @synthesize buttonCount;
@property(nonatomic) int tipViewType; // @synthesize tipViewType;
- (id)genStatInfo;
- (id)init;

@end

