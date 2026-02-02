//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCPayOverseaMainWalletDataSource : NSObject
{
    NSMutableArray *_m_dataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_dataSource; // @synthesize m_dataSource=_m_dataSource;
- (long long)count;
- (id)dataAtSection:(long long)arg1;
- (void)updateWithPayFunctionListRespObject:(id)arg1 ReadList:(id)arg2 rowCount:(unsigned long long)arg3 walletRegionDesc:(id)arg4 rightTopNew:(_Bool)arg5;
- (void)calculateFooterView;
- (id)initWithTpaCountry:(unsigned int)arg1 PayFunctionListRespObject:(id)arg2 IBGGetWalletCgiCache:(id)arg3 ReadList:(id)arg4 rowCount:(unsigned long long)arg5 rightTopNew:(_Bool)arg6;
- (id)initWithTpaCountry:(unsigned int)arg1 PayFunctionListRespObject:(id)arg2 IBGGetWalletCgiCache:(id)arg3 ReadList:(id)arg4 rowCount:(unsigned long long)arg5;

@end

