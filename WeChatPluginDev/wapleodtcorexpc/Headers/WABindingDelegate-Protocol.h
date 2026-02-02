//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol WABindingDelegate <NSObject>

@optional
- (void)close:(NSString *)arg1 code:(unsigned int)arg2 reason:(NSString *)arg3;
- (void)send:(NSString *)arg1 data:(id)arg2;
- (NSString *)connectWebSocket:(NSString *)arg1 header:(NSDictionary *)arg2 subProtocols:(NSArray *)arg3 tcpNoDelay:(_Bool)arg4 perMessageDeflate:(_Bool)arg5 timeout:(unsigned int)arg6 useProfile:(_Bool)arg7 forceCellular:(_Bool)arg8 workerId:(unsigned int)arg9 openHandler:(void (^)(NSDictionary *, NSDictionary *))arg10 messageHandler:(void (^)(NSData *))arg11 closeHandler:(void (^)(unsigned int, NSString *))arg12 errorHandler:(void (^)(unsigned int, NSString *))arg13;
- (void)readFileDataSync:(NSString *)arg1 block:(void (^)(NSData *, NSString *))arg2;
- (void)readFileData:(NSString *)arg1 position:(unsigned int)arg2 length:(unsigned int)arg3 workerId:(unsigned int)arg4 block:(void (^)(NSData *, NSString *))arg5;
- (NSString *)abortDownloadFile:(NSString *)arg1;
- (NSString *)downloadFile:(NSString *)arg1 header:(NSDictionary *)arg2 filePath:(NSString *)arg3 cleanMode:(_Bool)arg4 timeout:(unsigned int)arg5 workerId:(unsigned int)arg6 complete:(void (^)(NSString *, NSString *, long long, long long, NSString *, NSNumber *, NSDictionary *))arg7 progress:(void (^)(float, long long, long long))arg8 header:(void (^)(NSDictionary *))arg9 useQuic:(_Bool)arg10 useHttp2:(_Bool)arg11 useCache:(_Bool)arg12 useProfile:(_Bool)arg13;
@end

