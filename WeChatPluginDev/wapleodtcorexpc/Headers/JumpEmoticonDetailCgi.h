//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol IJumpEmoticonDetailCgiDelegate;

@interface JumpEmoticonDetailCgi
{
    unsigned int m_eventId;
    id <IJumpEmoticonDetailCgiDelegate> m_delegate;
    CDUnknownBlockType m_okBlock;
    CDUnknownBlockType m_failedBlock;
    NSString *m_urlString;
}

+ (id)instanceWithOkBlock:(CDUnknownBlockType)arg1 failedBlock:(CDUnknownBlockType)arg2;
+ (id)instanceWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_urlString; // @synthesize m_urlString;
@property(copy, nonatomic) CDUnknownBlockType m_failedBlock; // @synthesize m_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType m_okBlock; // @synthesize m_okBlock;
@property(nonatomic) unsigned int m_eventId; // @synthesize m_eventId;
@property(nonatomic) __weak id <IJumpEmoticonDetailCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void)onCgiOkWithPid:(id)arg1;
- (void)onCgiFailed:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequestWithUrlString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

