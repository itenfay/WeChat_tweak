//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UrlConnReceiveData : NSObject
{
    unsigned int m_uiReceiveTimeStamp;
    unsigned int m_uiDataLength;
}

@property(nonatomic) unsigned int m_uiDataLength; // @synthesize m_uiDataLength;
@property(nonatomic) unsigned int m_uiReceiveTimeStamp; // @synthesize m_uiReceiveTimeStamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

