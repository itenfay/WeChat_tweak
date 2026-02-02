//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MBFileSpaceStatusBizItem, NSString;

@interface MBFileStorageStatusSortBizItem : NSObject
{
    NSString *_bizName;
    MBFileSpaceStatusBizItem *_bizItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MBFileSpaceStatusBizItem *bizItem; // @synthesize bizItem=_bizItem;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
- (long long)compare:(id)arg1;
- (id)description;

@end

