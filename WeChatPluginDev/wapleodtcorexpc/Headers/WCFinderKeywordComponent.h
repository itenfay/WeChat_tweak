//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderKeywordComponent : NSObject
{
    NSString *_componentId;
    NSMutableDictionary *_keywordMap;
}

+ (id)findKeywordInRect:(struct CGRect)arg1 withKeywordMap:(const void *)arg2;
+ (multimap_b3919d51)keywordHiglightFrameInStyleArray:(id)arg1;
+ (_Bool)isFinderKeywordJumpUrl:(id)arg1;
+ (int)contextCommentSceneFromView:(id)arg1;
+ (void)reportClickCommentJumpInfo:(id)arg1 scene:(int)arg2 action:(long long)arg3 fromVC:(id)arg4 tid:(id)arg5 indexPath:(id)arg6 extra:(id)arg7;
+ (void)reportExposeKeywordJumpInfo:(id)arg1 scene:(int)arg2 fromVC:(id)arg3 tid:(id)arg4 indexPath:(id)arg5 extra:(id)arg6;
+ (void)reportExposeCommentKeyword:(struct WCFinderKeywordAction)arg1 scene:(int)arg2 fromVC:(id)arg3 tid:(id)arg4 indexPath:(id)arg5 extra:(id)arg6;
+ (void)reportClickCommentKeyword:(struct WCFinderKeywordAction)arg1 scene:(int)arg2 fromVC:(id)arg3 tid:(id)arg4 indexPath:(id)arg5 extra:(id)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *keywordMap; // @synthesize keywordMap=_keywordMap;
@property(retain, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
- (id)ensureJumpInfoSearchWord:(id)arg1 link:(id)arg2;
- (id)_displayIconForKeywordId:(id)arg1;
- (id)_linkForKeywordId:(id)arg1 text:(id)arg2;
- (void)parseNode:(struct XmlReaderNode_t *)arg1 readContentTo:(id)arg2;
- (id)paseContentFromNode:(struct XmlReaderNode_t *)arg1;
- (id)parseXMLForString:(id)arg1;
- (struct WCFinderKeywordAction)actionForKeywordUrl:(id)arg1;
- (id)allKeywordInfos;
- (id)initWithKeywordArray:(id)arg1 componentId:(id)arg2;
- (id)init;

@end

