//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface StoredMailAttachment : NSObject
{
    unsigned int type;
    unsigned int dataSize;
    NSString *objectId;
    NSString *objectName;
    NSData *data;
    NSString *attachID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(nonatomic) unsigned int dataSize; // @synthesize dataSize;
@property(retain, nonatomic) NSData *data; // @synthesize data;
@property(nonatomic) unsigned int type; // @synthesize type;
@property(retain, nonatomic) NSString *objectName; // @synthesize objectName;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

