//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TimeRecordWrap : NSObject
{
    struct timeval m_msCurTime;
}

@property(nonatomic) struct timeval m_msCurTime; // @synthesize m_msCurTime;
- (id)initWithTime:(struct timeval)arg1;

@end

