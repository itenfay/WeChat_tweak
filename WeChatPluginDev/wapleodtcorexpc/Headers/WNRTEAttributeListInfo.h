//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WNRTEAttributeListInfo : NSObject
{
    unsigned int index;
    unsigned int _headIndex;
}

@property(nonatomic) unsigned int headIndex; // @synthesize headIndex=_headIndex;
@property(nonatomic) unsigned int index; // @synthesize index;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

