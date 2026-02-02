//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WAAppBrandUpdateWxaUsageListNotify : NSObject
{
    unsigned int _type;
    unsigned int _deleteCount;
    NSMutableArray *_deleteAppInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *deleteAppInfos; // @synthesize deleteAppInfos=_deleteAppInfos;
@property(nonatomic) unsigned int deleteCount; // @synthesize deleteCount=_deleteCount;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

