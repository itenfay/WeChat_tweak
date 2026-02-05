//
// WCPLThreadSafeMutableDictionary.h
//
// 线程安全的可变字典实现：用于消息屏蔽等需要并发读写的场景
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WCPLThreadSafeMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>

- (instancetype)initWithDictionary:(NSDictionary<KeyType, ObjectType> * _Nullable)dictionary;

// 获取快照（用于持久化）
- (NSDictionary<KeyType, ObjectType> *)dictionaryRepresentation;

@end

NS_ASSUME_NONNULL_END

