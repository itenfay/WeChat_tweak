//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface iAPTransation : NSObject
{
    unsigned int iRequestType;
    unsigned int iBizType;
    NSString *nsProductID;
    NSString *nsTransationID;
    NSString *nsSerialID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int iBizType; // @synthesize iBizType;
@property(nonatomic) unsigned int iRequestType; // @synthesize iRequestType;
@property(retain, nonatomic) NSString *nsSerialID; // @synthesize nsSerialID;
@property(retain, nonatomic) NSString *nsTransationID; // @synthesize nsTransationID;
@property(retain, nonatomic) NSString *nsProductID; // @synthesize nsProductID;
- (id)description;

@end

