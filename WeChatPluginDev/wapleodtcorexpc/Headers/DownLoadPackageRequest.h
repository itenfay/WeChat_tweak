//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, Package;

@interface DownLoadPackageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int len; // @dynamic len;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) Package *package; // @dynamic package;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

