//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FinderLiveCloseNotifyMsg : NSObject
{
    NSString *_funcMsgID;
    NSString *_tipsID;
    NSString *_feedID;
    NSString *_liveID;
    NSString *_revokeID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *revokeID; // @synthesize revokeID=_revokeID;
@property(retain, nonatomic) NSString *liveID; // @synthesize liveID=_liveID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(retain, nonatomic) NSString *tipsID; // @synthesize tipsID=_tipsID;
@property(retain, nonatomic) NSString *funcMsgID; // @synthesize funcMsgID=_funcMsgID;
- (void)parseWithXml:(id)arg1;
- (id)initWithXmlContent:(id)arg1;

@end

