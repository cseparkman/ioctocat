// settings
#define kUsernameDefaultsKey @"username"
#define kTokenDefaultsKey @"token"

// tables
#define kStandardCellIdentifier @"StandardCell"
#define kRepositoryCellIdentifier @"RepositoryCell"
#define kTextCellIdentifier @"TextCell"
#define kLabeledCellIdentifier @"LabeledCell"
#define kFeedEntryCellIdentifier @"FeedEntryCell"
#define kCommitCellIdentifier @"CommitCell"

// URLs
#define kConnectivityCheckURL @"http://github.com/robots.txt"
#define kNewsFeedFormat @"https://github.com/%@.private.atom?token=%@"
#define kActivityFeedFormat @"https://github.com/%@.private.actor.atom?token=%@"
#define kUserXMLFormat @"https://github.com/api/v2/xml/user/show/%@"
#define kUserReposFormat @"https://github.com/api/v2/xml/repos/show/%@?token=%@"
#define kRepoXMLFormat @"https://github.com/api/v2/xml/repos/show/%@/%@"
#define kRepoCommitsXMLFormat @"https://github.com/api/v2/xml/commits/list/%@/%@/%@"
#define kRepoWatchFormat @"https://github.com/api/v2/xml/repos/watch/%@/%@?token=%@"
#define kRepoUnwatchFormat @"https://github.com/api/v2/xml/repos/watch/%@/%@?token=%@"
#define kUserFollowFormat @"https://github.com/api/v2/xml/user/follow/%@?token=%@"
#define kUserUnfollowFormat @"https://github.com/api/v2/xml/user/unfollow/%@?token=%@"

// KVO
#define kFeedLoadingKeyPath @"isLoading"
#define kUserLoadingKeyPath @"isLoading"
#define kUserReposLoadingKeyPath @"isReposLoading"
#define kUserGravatarKeyPath @"gravatar"
#define kRepoLoadingKeyPath @"isLoading"
#define kRepoRecentCommitsLoadingKeyPath @"isRecentCommitsLoading"
#define kResourceStatusKeyPath @"status"
#define kResourceErrorKeyPath @"error"
#define kRepositoriesStatusKeyPath @"repositoriesStatus"