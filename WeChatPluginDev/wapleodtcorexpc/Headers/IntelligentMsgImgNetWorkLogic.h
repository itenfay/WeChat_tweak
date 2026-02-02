//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol IntelligentMsgImgNetWorkLogicDelegate;

@interface IntelligentMsgImgNetWorkLogic : NSObject
{
    id <IntelligentMsgImgNetWorkLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgNetWorkLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetSimilarWordsWithQuery:(id)arg1;
- (void)getSimilarWordsWithQuery:(id)arg1;

@end

