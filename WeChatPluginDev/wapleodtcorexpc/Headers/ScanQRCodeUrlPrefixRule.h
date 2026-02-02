//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ScanQRCodeUrlPrefixRule : NSObject
{
    NSMutableArray *_m_handlerArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_handlerArray; // @synthesize m_handlerArray=_m_handlerArray;
- (void)reportHandleCount;
- (_Bool)isTransferUrl:(id)arg1;
- (_Bool)isUrlMatchPrefixRule:(id)arg1 andTryGetCodeType:(char *)arg2;
- (_Bool)shouldHandleUrl:(id)arg1;
- (id)initWithDelegate:(id)arg1 scene:(long long)arg2 sourceType:(unsigned int)arg3 sourceInfo:(id)arg4;

@end

