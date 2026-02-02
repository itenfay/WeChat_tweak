//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AudioData : NSObject
{
    NSData *_m_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data=_m_data;
- (unsigned int)getLength;
- (_Bool)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

