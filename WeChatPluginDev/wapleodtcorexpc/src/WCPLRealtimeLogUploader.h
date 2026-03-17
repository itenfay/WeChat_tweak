//
// WCPLRealtimeLogUploader.h
//
// 调试日志实时上传（HTTP）到本地仓库的日志服务器
//

#import <Foundation/Foundation.h>

@interface WCPLRealtimeLogUploader : NSObject

+ (instancetype)sharedUploader;

// 开关（默认关闭，持久化）
@property (nonatomic, assign) BOOL enabled;

// 在满足条件（开关开启 + 已启用调试日志）时启动
- (void)startIfNeeded;

// 停止定时上传
- (void)stop;

@end

