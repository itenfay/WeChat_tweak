//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderSocketPacket : NSObject
{
}

+ (id)packetWithBuffer:(id)arg1 head:(CDStruct_ac89a9bf *)arg2;
+ (id)packetWithBuffer:(id)arg1;
+ (id)packetWithBufferLength:(unsigned long long)arg1 msgType:(unsigned long long)arg2 state:(unsigned long long)arg3;

@end

