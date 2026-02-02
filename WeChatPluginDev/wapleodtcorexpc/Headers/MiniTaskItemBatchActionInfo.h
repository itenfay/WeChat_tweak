//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MiniTaskItemBatchActionInfo : NSObject
{
    unsigned long long _action;
    long long _itemCount;
    NSString *_detail;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;

@end

