//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AppmsgExposureItem : NSObject
{
    unsigned int _scene;
    unsigned int _createTime;
    unsigned int _currSessionID;
    NSString *_innerID;
    NSString *_chatName;
    NSArray *_urlInfoList;
    NSString *_sendUserName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currSessionID; // @synthesize currSessionID=_currSessionID;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *sendUserName; // @synthesize sendUserName=_sendUserName;
@property(retain, nonatomic) NSArray *urlInfoList; // @synthesize urlInfoList=_urlInfoList;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *innerID; // @synthesize innerID=_innerID;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;

@end

