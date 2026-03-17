//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RespWrap : NSObject
{
    int errType;
    int errCode;
    unsigned int eventID;
}

@property(nonatomic) unsigned int eventID; // @synthesize eventID;
@property(nonatomic) int errCode; // @synthesize errCode;
@property(nonatomic) int errType; // @synthesize errType;

@end

