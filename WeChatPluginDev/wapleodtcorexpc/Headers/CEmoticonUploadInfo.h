//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CEmoticonUploadInfo : NSObject
{
    _Bool m_bFirst;
    unsigned int m_uiStartPos;
    unsigned int m_uiTotalLen;
    NSString *m_nsMD5;
    CMessageWrap *m_wrapMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(nonatomic) _Bool m_bFirst; // @synthesize m_bFirst;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(retain, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5;
- (id)description;
- (id)init;

@end

