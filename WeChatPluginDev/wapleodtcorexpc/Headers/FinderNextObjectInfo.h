//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderNextObjectInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *nextObjectBuffer; // @dynamic nextObjectBuffer;
@property(nonatomic) unsigned long long nextObjectId; // @dynamic nextObjectId;
@property(readonly) Class superclass;

@end

