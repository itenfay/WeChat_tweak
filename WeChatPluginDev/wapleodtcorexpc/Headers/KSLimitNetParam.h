//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KSLimitNetParam : NSObject
{
    unsigned int _firstLimitTime;
    unsigned int _triggleTime;
    unsigned int _downloadTime;
}

@property(nonatomic) unsigned int downloadTime; // @synthesize downloadTime=_downloadTime;
@property(nonatomic) unsigned int triggleTime; // @synthesize triggleTime=_triggleTime;
@property(nonatomic) unsigned int firstLimitTime; // @synthesize firstLimitTime=_firstLimitTime;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

