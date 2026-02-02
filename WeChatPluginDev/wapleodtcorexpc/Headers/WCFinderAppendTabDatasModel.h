//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, WCFinderRedDotCtrlInfo;

@interface WCFinderAppendTabDatasModel : NSObject
{
    unsigned long long _scene;
    long long _tabType;
    NSArray *_appendContentVMArray;
    NSArray *_appendDataItemsArray;
    NSArray *_appendPostDataItemsArray;
    NSString *_scrollToFeedId;
    NSData *_lastBuffer;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *scrollToFeedId; // @synthesize scrollToFeedId=_scrollToFeedId;
@property(retain, nonatomic) NSArray *appendPostDataItemsArray; // @synthesize appendPostDataItemsArray=_appendPostDataItemsArray;
@property(retain, nonatomic) NSArray *appendDataItemsArray; // @synthesize appendDataItemsArray=_appendDataItemsArray;
@property(retain, nonatomic) NSArray *appendContentVMArray; // @synthesize appendContentVMArray=_appendContentVMArray;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)triggerCheckPostDataItems;
- (_Bool)shouldRefreshTopData;
- (_Bool)hasAppendData;
- (id)description;

@end

