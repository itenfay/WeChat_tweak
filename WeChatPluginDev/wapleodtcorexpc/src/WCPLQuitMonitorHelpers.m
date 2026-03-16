#import "WCPLQuitMonitorHelpers.h"

#import "WCPLPureHelpers.h"

static NSArray<NSString *> *wcpl_qm_normalizedMembersFromArray(NSArray<NSString *> *members) {
    NSMutableOrderedSet<NSString *> *normalized = [NSMutableOrderedSet orderedSet];
    for (NSString *member in members) {
        NSString *trimmed = WCPLTrimText(member);
        if (trimmed.length > 0) {
            [normalized addObject:trimmed];
        }
    }
    return normalized.array;
}

NSArray<NSString *> *WCPLQuitMonitorMembersFromRawList(NSString *rawList) {
    NSString *trimmed = WCPLTrimText(rawList);
    if (trimmed.length == 0) {
        return @[];
    }

    return wcpl_qm_normalizedMembersFromArray([trimmed componentsSeparatedByString:@";"]);
}

NSArray<NSString *> *WCPLQuitMonitorRemovedMembers(NSArray<NSString *> *oldMembers,
                                                   NSArray<NSString *> *newMembers,
                                                   NSString *selfUserName) {
    NSArray<NSString *> *normalizedOldMembers = wcpl_qm_normalizedMembersFromArray(oldMembers ?: @[]);
    NSArray<NSString *> *normalizedNewMembers = wcpl_qm_normalizedMembersFromArray(newMembers ?: @[]);
    if (normalizedOldMembers.count == 0 || normalizedNewMembers.count == 0) {
        return @[];
    }

    NSString *trimmedSelfUserName = WCPLTrimText(selfUserName);
    NSSet<NSString *> *newMemberSet = [NSSet setWithArray:normalizedNewMembers];
    NSMutableArray<NSString *> *removedMembers = [NSMutableArray array];
    for (NSString *member in normalizedOldMembers) {
        if ([newMemberSet containsObject:member]) {
            continue;
        }
        if (trimmedSelfUserName.length > 0 && [member isEqualToString:trimmedSelfUserName]) {
            continue;
        }
        [removedMembers addObject:member];
    }
    return removedMembers;
}

NSString *WCPLQuitMonitorBuildEventKey(NSString *roomUserName,
                                       NSArray<NSString *> *removedMembers) {
    NSString *trimmedRoomUserName = WCPLTrimText(roomUserName);
    NSArray<NSString *> *normalizedRemovedMembers = wcpl_qm_normalizedMembersFromArray(removedMembers ?: @[]);
    if (trimmedRoomUserName.length == 0 || normalizedRemovedMembers.count == 0) {
        return nil;
    }

    return [NSString stringWithFormat:@"%@|%@",
                                      trimmedRoomUserName,
                                      [normalizedRemovedMembers componentsJoinedByString:@","]];
}
