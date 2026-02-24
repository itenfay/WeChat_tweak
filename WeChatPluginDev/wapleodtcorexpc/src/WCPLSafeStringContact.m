//
// WCPLSafeStringContact.m
//
// 兼容兜底：某些场景下 WeChat 会把用户名 NSString 当成 CContact 使用，
// 直接调用 m_nsUsrName 导致 -[__NSCFString m_nsUsrName] 崩溃。
// 在 NSString 上补同名 getter，返回自身，避免闪退。
//

#import <Foundation/Foundation.h>

@implementation NSString (WCPLSafeContact)

- (NSString *)m_nsUsrName {
    return self;
}

- (BOOL)isAccountDeleted {
    return NO;
}

- (BOOL)isChatroom {
    return [self rangeOfString:@"@chatroom" options:NSCaseInsensitiveSearch].location != NSNotFound;
}

@end
