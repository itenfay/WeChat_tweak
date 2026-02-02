//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MMIlinkGetResourceDescriptionReqItem : NSObject
{
    unsigned int _qos;
    NSString *_projectId;
    NSArray *_resourceNameList;
    NSMutableDictionary *_localResources;
    NSDictionary *_projectParams;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int qos; // @synthesize qos=_qos;
@property(retain, nonatomic) NSDictionary *projectParams; // @synthesize projectParams=_projectParams;
@property(retain, nonatomic) NSMutableDictionary *localResources; // @synthesize localResources=_localResources;
@property(retain, nonatomic) NSArray *resourceNameList; // @synthesize resourceNameList=_resourceNameList;
@property(retain, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;

@end

