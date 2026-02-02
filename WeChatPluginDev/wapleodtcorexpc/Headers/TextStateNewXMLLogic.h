//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TextStateNewXMLLogicDelegate;

@interface TextStateNewXMLLogic : NSObject
{
    id <TextStateNewXMLLogicDelegate> _delegate;
    NSMutableDictionary *_typeToHandlerMap;
}

+ (_Bool)isBypassChannelSupportedForType:(id)arg1;
+ (id)newXMLTypeList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *typeToHandlerMap; // @synthesize typeToHandlerMap=_typeToHandlerMap;
@property(nonatomic) __weak id <TextStateNewXMLLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initStatusNewModifyHandler;
- (void)initTextStatusIconConfigRefreshHandler;
- (void)initTextStatusCommentHandler;
- (void)initTextStatusLikeHandler;
- (void)initModTextStatusHandler;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)registerNewXMLType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)initHandler;
- (void)initData;
- (id)init;

@end

