//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class MISSING_TYPE, WCFinderDataItem;

@interface _TtC6WeChat17FinderInterestMgr : NSObject
{
    MISSING_TYPE *dataItem;
}

+ (id)shared;
- (id)init;
@property(nonatomic, retain) WCFinderDataItem *dataItem; // @synthesize dataItem;
- (id)createFinderInterestBottom:(id)arg1 showClosure:(CDUnknownBlockType)arg2 dismissClosure:(CDUnknownBlockType)arg3;

@end
