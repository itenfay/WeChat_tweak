#import "WCPLQuitMonitorHelpers.h"

#import "WCPLPureHelpers.h"

NSArray<NSString *> *WCPLQuitMonitorMembersFromRawList(NSString *rawList) {
    NSString *trimmed = WCPLTrimText(rawList);
    if (trimmed.length == 0) {
        return @[];
    }

    return WCPLSanitizeIdentifierArray([trimmed componentsSeparatedByString:@";"]);
}

NSArray<NSString *> *WCPLQuitMonitorRemovedMembers(NSArray<NSString *> *oldMembers,
                                                   NSArray<NSString *> *newMembers,
                                                   NSString *selfUserName) {
    NSArray<NSString *> *normalizedOldMembers = WCPLSanitizeIdentifierArray(oldMembers);
    NSArray<NSString *> *normalizedNewMembers = WCPLSanitizeIdentifierArray(newMembers);
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
    NSArray<NSString *> *normalizedRemovedMembers = WCPLSanitizeIdentifierArray(removedMembers);
    if (trimmedRoomUserName.length == 0 || normalizedRemovedMembers.count == 0) {
        return nil;
    }

    return [NSString stringWithFormat:@"%@|%@",
                                      trimmedRoomUserName,
                                      [normalizedRemovedMembers componentsJoinedByString:@","]];
}
